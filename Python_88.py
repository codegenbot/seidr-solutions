def sort_array(arr):
    return sorted(map(int, arr))


def main():
    while True:
        try:
            array_str = input("Enter an array: ")
            if not array_str:
                print("Please enter an array")
                continue
            array = list(map(str.strip, array_str.split()))
            if any(not x.replace(".", "", 1).isdigit() for x in array):
                print("Invalid input. Please enter numbers separated by spaces.")
                continue
            if len(array) < 2:
                print("Array should have at least two elements. Please enter again.")
                continue
            array = [int(x) for x in array]
            break
        except ValueError as e:
            print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")

    print(sort_array(array))


if __name__ == "__main__":
    main()