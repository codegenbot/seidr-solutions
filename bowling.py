```
def solve(input_string):
    score = 0
    i = 0
    frames = input_string.split()
    for frame in frames:
        if frame == "X":
            score += 10
            i += 1
        elif "/" in frame:
            parts = [part for part in frame.split("") if part.isdigit()]
            if parts: 
                score += sum(int(part) for part in parts)
            else:
                score += 10
            i += 1
        else:
            parts = [part for part in frame.split("") if part.isdigit()]
            if parts: 
                score += sum(int(part) for part in parts)
            else:
                score += -5
            i += 1
    if i < len(frames):
        parts = [part for part in frames[i] if part.isdigit()]
        if parts: 
            score += sum(int(part) for part in parts)
        else:
            score += 10
    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)