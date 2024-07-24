```
# Find all pairs of numbers in two lists that are within a given distance.
def find_closest_elements(numbers: List[float], target, num_to_include):
    sorted_numbers = sorted(set(numbers))
    closest_nums = []
    for num in sorted_numbers:
        left_index = bisect_left(sorted_numbers, target - num_to_include)
        right_index = bisect_right(sorted_numbers, target + num_to_include)
        window_numbers = sorted_numbers[left_index:right_index]
        for pair_num in window_numbers:
            if abs(pair_num - target) <= num_to_include:
                closest_nums.append((num, pair_num))
    return tuple(closest_nums)

def main():
    numbers = [int(i.strip()) for i in input().split()]
    target = float(input())
    num_to_include = int(input())
    print(find_closest_elements(numbers, target, num_to_include))

if __name__ == "__main__":
    main()