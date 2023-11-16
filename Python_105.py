def by_length(arr):
    """
    Given an array of integers, sort the integers that are between 1 and 9 inclusive,
    reverse the resulting array, and then replace each digit by its corresponding name from
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine".

    For example:
      arr = [2, 1, 1, 4, 5, 8, 2, 3]   
            -> sort arr -> [1, 1, 2, 2, 3, 4, 5, 8] 
            -> reverse arr -> [8, 5, 4, 3, 2, 2, 1, 1]
      return ["Eight", "Five", "Four", "Three", "Two", "Two", "One", "One"]
    
      If the array is empty, return an empty array:
      arr = []
      return []
    
      If the array has any strange number ignore it:
      arr = [1, -1 , 55] 
            -> sort arr -> [-1, 1, 55]
            -> reverse arr -> [55, 1, -1]
      return = ['One']
    """

    # Complete the following code given the task description and function signature.
    arr.sort()
    arr.reverse()
    new_arr = []
    for i in arr:
        if i == 1:
            new_arr.append("One")
        elif i == 2:
            new_arr.append("Two")
        elif i == 3:
            new_arr.append("Three")
        elif i == 4:
            new_arr.append("Four")
        elif i == 5:
            new_arr.append("Five")
        elif i == 6:
            new_arr.append("Six")
        elif i == 7:
            new_arr.append("Seven")
        elif i == 8:
            new_arr.append("Eight")
        elif i == 9:
            new_arr.append("Nine")
    return new_arr
