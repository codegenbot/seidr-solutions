```
def file_name_check(file_name):
    if len(file_name) > 0:
        before_dot = file_name.rsplit('.', 1)[0]
        after_dot = file_name.rsplit('.', 1)[1].lower()
        
        if (before_dot and before_dot[0].isalpha() and 
            sum(c.isdigit() for c in before_dot) <= 3 and 
            len(file_name.split('.')) == 2 and 
            after_dot in ['txt', 'exe', 'dll']):
            return 'Yes'
    return 'No'