```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name_before_dot = file_name.rsplit('.', 1)[0]
    if not name_before_dot or not name_before_dot[0].isalpha():
        return 'No'
    extensions = ['txt', 'exe', 'dll']
    name_after_dot = file_name.split('.')[-1]
    if name_after_dot.lower() not in extensions:
        return 'No'
    return 'Yes'