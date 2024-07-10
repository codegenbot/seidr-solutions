```
def main():
    while True:
        try:
            lst = input("Enter words (separated by space): ").lower().replace(" ", "").split()
            if len(lst) > 0:
                print(sum(len(word) for word in lst if len(word) % 2 == 0))
                break
            else:
                print("Please enter at least one word.")
        except ValueError:
            print("Invalid input. Please try again.")

if __name__ == "__main__":
    main()