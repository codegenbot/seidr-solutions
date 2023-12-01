def bowling(string):
    score = 0
    frames = string.split('/')
    for frame in frames:
        if 'X' in frame:
            score += 10
            if frame == 'X' * 2:
                score += 10
            elif len(frame) == 3:
                score += int(frame[1]) + int(frame[2])
        else:
            score += sum(int(bowl) for bowl in frame if bowl != '-')
    return score

# Read input from user
input_string = input("Enter the string of bowls: ")

# Calculate and print the score
print(bowling(input_string))