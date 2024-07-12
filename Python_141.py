```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    before_dot = file_name.rsplit('.', 1)[0]
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    after_dot = file_name.split('.')[-1]
    valid_extensions = ['txt', 'exe', 'dll']
    if after_dot not in valid_extensions:
        return 'No'
    return 'Yes'