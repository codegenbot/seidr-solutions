def double_the_difference(list1, list2):
    difference = abs(max(list1) - min(list2))
    return difference * 2


def main():
    list1 = input("Enter the first list of numbers (separated by commas): ").split(",")
    list1 = [int(x) for x in list1]
    list2 = input("Enter the second list of numbers (separated by commas): ").split(",")
    list2 = [int(x) for x in list2]
    print(double_the_difference(list1, list2))


if __name__ == "__main__":
    main()