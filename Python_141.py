```
def file_name_check(file_name):
    if len([i for i in set(file_name) if i.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.')[0].strip().isalpha() is False:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    valid_extensions = ['txt', 'exe', 'dll']
    if extension not in valid_extensions:
        return 'No'
    return 'Yes'