```
def find_closest_elements():
    while True:
        try:
            nums1 = list(map(int, input("Enter first set of numbers separated by space: ").split()))
            if len(nums1) >= 2 and len(set(nums1)) == len(nums1):
                break
            print("Please enter at least two distinct integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    while True:
        try:
            nums2 = list(map(int, input("Enter second set of numbers separated by space: ").split()))
            if len(nums2) >= 2 and len(set(nums2)) == len(nums2):
                break
            print("Please enter at least two distinct integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    min_diff = float('inf')
    for num1 in nums1:
        for num2 in nums2:
            diff = abs(num1 - num2)
            if diff < min_diff:
                min_diff = diff

    return str(min_diff)

print("Closest pair is: ", find_closest_elements())