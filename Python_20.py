def find_closest_elements(arr):
    n = len(arr)
    arr.sort()
    if n % 2 == 0:
        mid1 = arr[n//2 - 1]
        mid2 = arr[n//2]
    else:
        mid1 = mid2 = arr[n//2]
    closest_elements = [mid1, mid2]
    return closest_elements

def check():
    input_str = input("Enter a number: ")
    arr = list(map(int, input_str.split()))
    closest_elements = find_closest_elements(arr)
    print(closest_elements)

check()