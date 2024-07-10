def find_closest_integer(lst):
    average = sum(lst) / len(lst)
    closest_integer = round(average)

    if int(average) != average:
        closest_integer = round(average + (1 if average > 0 else -1), 0)

    return closest_integer


def main():
    lst = input("Enter space-separated numbers: ").split()
    try:
        lst = [int(x) for x in lst]
        print(find_closest_integer(lst))
    except ValueError as e:
        print(f"Invalid input: {e}")


if __name__ == "__main__":
    main()