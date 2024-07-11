def solution(lst): 
    return sum(i for i in lst if str(i) in '13579')