def main():
    while True:
        try:
            lst = (
                input("Enter words (separated by space): ")
                .lower()
                .replace(" ", "")
                .split()
            )
            break
        except Exception as e:
            print(f"Error: {str(e)}")
            continue

    if len(lst) > 0:
        print(sum(len(word) for word in lst if len(word) % 2 == 0))
    else:
        print("Please enter at least one word.")


if __name__ == "__main__":
    main()