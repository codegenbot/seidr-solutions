def by_length(arr):
    # sort the array in ascending order
    arr.sort()
    
    # reverse the array
    arr.reverse()
    
    # create a dictionary to map digits to their corresponding names
    digit_to_name = {1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"}
    
    # create an empty list to store the resulting names
    result = []
    
    # iterate over the sorted and reversed array
    for num in arr:
        # if the current number is between 1 and 9, add its corresponding name to the result list
        if num >= 1 and num <= 9:
            result.append(digit_to_name[num])
    
    return result