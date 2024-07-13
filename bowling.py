def main():
    frames = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")
    score = bowling_score(frames)
    print(f"The score for this round is {score}.")

if __name__ == "__main__":
    main()