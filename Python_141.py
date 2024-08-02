```
def file_name_check(file_name):
    if '.' in file_name:
        before_dot = file_name[:file_name.index('.')]
        after_dot = file_name[file_name.index('.') + 1:]
        
        if all(char.isdigit() for char in before_dot) and len(before_dot) > 0 and before_dot[0].isalpha():
            valid_extensions = ['txt', 'exe', 'dll']
            if after_dot.lower() in valid_extensions:
                return 'Yes'
    return 'No'