def add_elements(arr, k):
    return sum(arr[i] for i in range(k) if 10 <= arr[i] <= 99 and i % 2 == 0)