import re

total_score = 0
while True:
    try:
        user_input = input().split("\n")
        frames = [int("".join(filter(str.isdigit, frame))) for frame in user_input if len(frame.replace("-", "",)) > 0]
        
        total_score = sum([
            (min(10, k) + (k - 1) * 1 if k < 10 else k + 30 if "X" in frame else min(k // 2, k))
            for k, frame in zip(frames, user_input)
        ])
        break
    except ValueError:
        print("Invalid input. Please enter valid bowling scores (e.g., '10-', '5/', 'X'). Try again!")

print(total_score)