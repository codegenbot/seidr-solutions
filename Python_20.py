```
def find_closest_elements():
    arr = []
    while True:
        num = input("Enter a number (or 'done' if finished): ")
        if num.lower() == 'done':
            break
        arr.append(int(num))

    min_diff = float('inf')
    closest_pair = ()

    for i in range(len(arr) - 1):
        diff = abs(arr[i+1] - arr[i])
        
        if diff < min_diff:
            min_diff = diff
            closest_pair = (arr[i], arr[i+1])

    return f"The closest numbers are {closest_pair[0]} and {closest_pair[1]}, which differ by {min_diff}."