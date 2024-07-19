def find_closest_elements(numbers):
    sorted_numbers = sorted(numbers)
    closest_pair = (sorted_numbers[-2], sorted_numbers[-1])
    return closest_pair

if __name__ == "__main__":
    try:
        numbers = list(map(int, input().split()))
        closest_pair = find_closest_elements(numbers)
        print(*closest_pair)
    except:
        print("Error: Input is incorrect")