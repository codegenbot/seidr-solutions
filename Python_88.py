def sort_array(arr):
    return sorted(map(int, arr))


def main():
    while True:
        try:
            array_str = input("Enter an array: ")
            array = list(map(str.strip, array_str.split()))
            if any(not x.replace(".", "", 1).isdigit() for x in array):
                print("Invalid input. Please enter numbers separated by spaces.")
                continue
            if len(array) < 2:
                print("Array should have at least two elements. Please enter again.")
                continue
            array = [int(x) for x in array]
            print(sort_array(array))
            break
        except ValueError as e:
            print(f"Invalid input. Please enter numbers separated by spaces: {str(e)}")


if __name__ == "__main__":
    main()