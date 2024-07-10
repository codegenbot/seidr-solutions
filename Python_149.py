```
def main():
    lst = [input("Enter words (separated by space): ").lower().replace(" ", "").split()]
    if len(lst) > 0:
        print(sorted_list_sum([word for word in lst[0] if len(word) % 2 == 0]))
    else:
        print("Please enter at least one word.")


def sorted_list_sum(lst):
    return sum(len(word) for word in lst)


if __name__ == "__main__":
    main()