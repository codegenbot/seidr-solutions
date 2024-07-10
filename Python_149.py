def main():
    lst = [input("Enter words (separated by space): ").lower().split()]
    print(sorted_list_sum(lst[0]))


def sorted_list_sum(lst):
    even_words = sorted([word for word in lst if len(word) % 2 == 0])

    return sum(len(word) for word in even_words)


if __name__ == "__main__":
    main()