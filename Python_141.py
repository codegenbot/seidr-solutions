```
def file_name_check(file_name):
    if len(file_name) < 2:
        return 'No'
    if not file_name[0].isalpha():
        return 'No'
    dot_index = file_name.find('.')
    if dot_index == -1 or dot_index > 4:
        return 'No'
    before_dot, after_dot = file_name[:dot_index], file_name[dot_index+1:]
    if len([c for c in before_dot if c.isdigit()]) > 3:
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if after_dot not in valid_extensions:
        return 'No'
    return 'Yes'