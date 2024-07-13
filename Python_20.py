```
def find_closest_elements():
    while True:
        try:
            nums1 = list(map(int, input("Enter first set of numbers separated by space: ").split()))
            nums2 = list(map(int, input("Enter second set of numbers separated by space: ").split()))
            if len(set(nums1)) == len(nums1) and len(set(nums2)) == len(nums2):
                break
            print("Please enter at least two distinct integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")
    nums1.sort()
    nums2.sort()
    closest_pair = float("inf")
    for i in range(len(nums1) - 1):
        if abs(nums1[i] - nums2[i]) < closest_pair:
            closest_pair = abs(nums1[i] - nums2[i])
    return str(closest_pair)

print("Closest pair is: ", find_closest_elements())