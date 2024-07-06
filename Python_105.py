
def by_length(arr):
    # sort the array in ascending order
    arr.sort()

    # reverse the sorted array
    arr = arr[::-1]

    # replace each digit with its corresponding name
    names = ['One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine']
    for i in range(len(arr)):
        arr[i] = names[arr[i] - 1]

    return arr