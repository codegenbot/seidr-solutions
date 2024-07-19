def find_closest_elements(numbers):
    if len(numbers) < 2:
        return "Error: At least 2 numbers are required"
    
    sorted_numbers = sorted(numbers)
    closest_pair = (sorted_numbers[0], sorted_numbers[1])
    return closest_pair

if __name__ == "__main__":
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    
    if len(numbers) < 2:
        print("Error: At least 2 numbers are required")
    else:
        closest_pair = find_closest_elements(numbers)
        print(*closest_pair)