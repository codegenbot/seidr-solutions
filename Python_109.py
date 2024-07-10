def move_one_ball():
    num = int(input())
    if len(str(num)) == 0:
        return True
    
    max_val = int(max(str(num)))
    
    for i in range(len(str(num))):
        if int(str(num)[i]) > max_val - len(str(num)) + i:
            return False
    return True