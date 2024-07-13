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

    nums1.sort()
    nums2.sort()
    closest_pair = float("inf")
    for i in range(len(nums1) - 1):
        if abs(nums1[i] - nums1[i + 1]) < closest_pair:
            closest_pair = abs(nums1[i] - nums1[i + 1])
    for i in range(len(nums2) - 1):
        if abs(nums2[i] - nums2[i + 1]) < closest_pair:
            closest_pair = abs(nums2[i] - nums2[i + 1])

    return str(closest_pair)

print("Closest pair is: ", find_closest_elements())