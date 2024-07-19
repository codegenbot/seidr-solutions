if __name__ == "__main__":
    numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").strip().split()))
    closest_pair = find_closest_elements(numbers)
    print(*closest_pair)