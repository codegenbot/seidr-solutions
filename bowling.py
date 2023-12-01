import re

def bowling_score(frames):
    total_score = 0
    frame_index = 0
    
    # Convert 'X' to '10' and '/' to '-1' for easier processing
    frames = frames.replace('X', '10')
    frames = frames.replace('/', '-1')
    
    # Split the frames into a list
    frames_list = re.findall(r'\d+|-1', frames)
    
    for i in range(10):
        frame_score = 0
        
        if frames_list[frame_index] == '10':
            # Strike
            frame_score += 10
            frame_score += bonus(frames_list[frame_index+1], frames_list[frame_index+2])
            frame_index += 1
        else:
            frame_score += int(frames_list[frame_index][0])
            frame_score += bonus(frames_list[frame_index][1], frames_list[frame_index+1])
            frame_index += 1
        
        total_score += frame_score
    
    return total_score

def bonus(first, second):
    if first == '-1':
        return 10
    elif second == '-1':
        return 10 - int(first)
    else:
        return int(first) + int(second)

# Read input from user
frames = input()

# Calculate and print the score
print(bowling_score(frames))