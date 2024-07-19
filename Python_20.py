if __name__ == "__main__":
    numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
    closest_pair = find_closest_elements(numbers)
    print(closest_pair[0], closest_pair[1])