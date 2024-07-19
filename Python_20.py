def find_closest_elements(numbers):
    sorted_numbers = sorted(numbers)
    closest_pair = (sorted_numbers[-2], sorted_numbers[-1])
    return closest_pair

if __name__ == "__main__":
    try:
        numbers = list(map(int, input().split()))
        if len(numbers) < 2:
            raise ValueError
        closest_pair = find_closest_elements(numbers)
        print(*closest_pair)
    except ValueError:
        print("Error: Please provide at least 2 numbers")
    except:
        print("Error: An unexpected error occurred")