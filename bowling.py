def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
        else:
            score += int(bowls[i])
    return score

def main():
    print("Enter the string representing the individual bowls in a 10-frame round of 10 pin bowling: ")
    bowls = input()
    print("The score of that round is: ", get_score(bowls))

if __name__ == "__main__":
    main()