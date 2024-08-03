```
def file_name_check(file_name):
    if len([char for char in file_name if char.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    if not name[0].isalpha():
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if extension not in valid_extensions:
        return 'No'
    return 'Yes'