```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    dot_index = file_name.find('.')
    if dot_index == -1 or dot_index == 0 or dot_index == len(file_name) - 1:
        return 'No'
    before_dot = file_name[:dot_index]
    after_dot = file_name[dot_index + 1:]
    if not before_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if after_dot.lower() not in allowed_extensions:
        return 'No'
    return 'Yes'