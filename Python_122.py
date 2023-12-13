def add_elements(arr, k):
    filtered_arr = [x for x in arr if (10 <= x <= 100) or (200 <= x <= 1000) or (10 <= x <= 199) or (100 <= x <= 199)]
    
    index = 0
    for num in filtered_arr:
        if (10 <= num <= 100) or (200 <= num <= 1000) or (10 <= num <= 199) or (100 <= num <= 199):
            if index == k - 1:
                return num
            index += 1
    
    return None