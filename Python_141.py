```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    before_dot = file_name.split('.')[0]
    after_dot = file_name.split('.')[1]
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if after_dot not in allowed_extensions:
        return 'No'
    return 'Yes'