```
def sort_array(array):
    array.sort()
    if len(array) % 2 == 0:
        return [array[len(array)//2-1: len(array)//2+1]]
    else:
        return [array[(len(array)+1)//2-1: (len(array)+1)//2]]