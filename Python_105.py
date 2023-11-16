
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
    if arr == []:
        return []
    else:
        arr = sorted(arr)
        arr = arr.reverse()
        arr = [str(i) for i in arr]
        arr = [i.replace('1', 'One') for i in arr]
        arr = [i.replace('2', 'Two') for i in arr]
        arr = [i.replace('3', 'Three') for i in arr]
        arr = [i.replace('4', 'Four') for i in arr]
        arr = [i.replace('5', 'Five') for i in arr]
        arr = [i.replace('6', 'Six') for i in arr]
        arr = [i.replace('7', 'Seven') for i in arr]
        arr = [i.replace('8', 'Eight') for i in arr]
        arr = [i.replace('9', 'Nine') for i in arr]
        return arr


if __name__ == "__main__":
    arr = [2, 1, 1, 4, 5, 8, 2, 3]
    print(by_length(arr))
