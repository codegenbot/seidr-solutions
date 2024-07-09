def add_elements(arr, k):
    return (
        sum(num for num in arr if num >= 10 and num <= 100)
        if k <= len(arr)
        else sum(num for num in arr if num >= 10 and num <= 100)
    )