```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    dot_count = file_name.count('.')
    if dot_count != 1:
        return 'No'
    before_dot, after_dot = file_name.rsplit('.', 1)
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if after_dot not in allowed_extensions:
        return 'No'
    return 'Yes'