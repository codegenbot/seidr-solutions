def get_bowling_score(rolls):
    score = 0
    for i in range(len(rolls)):
        if rolls[i] == 'X':
            score += 10
        elif rolls[i] == '/':
            score += 10 - int(rolls[i-1])
        else:
            score += int(rolls[i])
    return score

def main():
    print("Please enter the rolls for a bowling round (10 frames):")
    rolls = input()
    score = get_bowling_score(rolls)
    print("The score for this round is:", score)

if __name__ == "__main__":
    main()