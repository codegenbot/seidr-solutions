def find_average(lst):
    closest_integer = round(sum(lst) / len(lst))
    return closest_integer


def main():
    lst = input("Enter space-separated numbers: ").split()
    try:
        lst = [int(x) for x in lst]
        print(find_average(lst))
    except ValueError as e:
        print(f"Invalid input: {e}")


if __name__ == "__main__":
    main()