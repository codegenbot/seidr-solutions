```
frames = input("Enter the frames (e.g., 'X', '/'): ")
def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char == 'X':
            score += 10 + (10 - int(input(f"Enter the number of pins knocked down in frame {frame_count}: ")))
            frame_count += 1
        elif char == '/':
            first_roll = int(input(f"Enter the number of pins knocked down in the first roll of frame {frame_count}: "))
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_count += 1
        else:
            score += int(char)
            frame_count += 1
    print(score)
print(bowling_score(frames))