if __name__ == "__main__":
    numbers = list(map(int, input("Enter numbers separated by space: ").strip().split()))

    if not numbers:
        print("Error: Please provide at least 2 numbers")
    elif len(numbers) < 2:
        print("Error: At least 2 numbers are required")
    else:
        closest_pair = find_closest_elements(numbers)
        print(*closest_pair)