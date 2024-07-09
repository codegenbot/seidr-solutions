```
def calculate_score(student_id):
    '''
Return a score based on student ID.
0: [1-99], 1: [100-199], 2: [200-299], 3: [300-399], 
4: [400-499], 5: [500-599], 6: [600-699], 7: [700-799], 8: [800-899], 9: [900-999]
    '''
    score = int(input("Enter student ID: ")) % 1000 // 100
    return score