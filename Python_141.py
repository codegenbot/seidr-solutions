```
def file_name_check(file_name):
    if '.' not in file_name:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    before_dot = parts[0]
    after_dot = parts[1].lower()
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    if len([c for c in before_dot if c.isdigit()]) > 3:
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if after_dot not in valid_extensions:
        return 'No'
    return 'Yes'