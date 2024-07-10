def main():
    words = input("Enter words (separated by space): ").lower().split()
    if len(words) > 0:
        print(sorted_list_sum(words))
    else:
        print("Please enter at least one word.")


def sorted_list_sum(lst):
    even_words = sorted([word for word in lst if len(word) % 2 == 0])

    return sum(len(word) for word in even_words)


if __name__ == "__main__":
    main()