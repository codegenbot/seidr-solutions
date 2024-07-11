def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    if not name.isalpha():
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if extension.lower() not in valid_extensions:
        return 'No'
    return 'Yes'