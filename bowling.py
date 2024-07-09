import re

user_input = input()
total_score = 0
current_frame = 1
frames = user_input.split("\n")

for frame in frames:
    if len(frame) == 2 and frame[0] == 'X':  
        total_score += 10 + sum(map(int, frames[:current_frame+1][:2]))
        current_frame += 1
    elif '-' in frame:  
        total_score += 5 + map(int, frame.split('-'))[1]
        current_frame += 1
    else:
        strike_count = 0
        for roll in map(int, frame.split()):
            if strike_count == 2:
                break
            elif strike_count > 0:  
                total_score += roll + 10 * (strike_count - 1)
                current_frame += 1
                break
            else:
                total_score += roll
        if len(frame.split()) < 2:
            continue

print(total_score)